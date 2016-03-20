/**
 */
package EventAutomatonModel.impl;

import EventAutomatonModel.EventAutomatonModelPackage;
import EventAutomatonModel.SetTimerAction;

import org.eclipse.emf.common.notify.Notification;

import org.eclipse.emf.ecore.EClass;

import org.eclipse.emf.ecore.impl.ENotificationImpl;

/**
 * <!-- begin-user-doc -->
 * An implementation of the model object '<em><b>Set Timer Action</b></em>'.
 * <!-- end-user-doc -->
 * <p>
 * The following features are implemented:
 * </p>
 * <ul>
 *   <li>{@link EventAutomatonModel.impl.SetTimerActionImpl#getToValue <em>To Value</em>}</li>
 * </ul>
 *
 * @generated
 */
public class SetTimerActionImpl extends TimerActionImpl implements SetTimerAction {
	/**
	 * The default value of the '{@link #getToValue() <em>To Value</em>}' attribute.
	 * <!-- begin-user-doc -->
	 * <!-- end-user-doc -->
	 * @see #getToValue()
	 * @generated
	 * @ordered
	 */
	protected static final int TO_VALUE_EDEFAULT = 100;

	/**
	 * The cached value of the '{@link #getToValue() <em>To Value</em>}' attribute.
	 * <!-- begin-user-doc -->
	 * <!-- end-user-doc -->
	 * @see #getToValue()
	 * @generated
	 * @ordered
	 */
	protected int toValue = TO_VALUE_EDEFAULT;

	/**
	 * <!-- begin-user-doc -->
	 * <!-- end-user-doc -->
	 * @generated
	 */
	protected SetTimerActionImpl() {
		super();
	}

	/**
	 * <!-- begin-user-doc -->
	 * <!-- end-user-doc -->
	 * @generated
	 */
	@Override
	protected EClass eStaticClass() {
		return EventAutomatonModelPackage.Literals.SET_TIMER_ACTION;
	}

	/**
	 * <!-- begin-user-doc -->
	 * <!-- end-user-doc -->
	 * @generated
	 */
	public int getToValue() {
		return toValue;
	}

	/**
	 * <!-- begin-user-doc -->
	 * <!-- end-user-doc -->
	 * @generated
	 */
	public void setToValue(int newToValue) {
		int oldToValue = toValue;
		toValue = newToValue;
		if (eNotificationRequired())
			eNotify(new ENotificationImpl(this, Notification.SET, EventAutomatonModelPackage.SET_TIMER_ACTION__TO_VALUE, oldToValue, toValue));
	}

	/**
	 * <!-- begin-user-doc -->
	 * <!-- end-user-doc -->
	 * @generated
	 */
	@Override
	public Object eGet(int featureID, boolean resolve, boolean coreType) {
		switch (featureID) {
			case EventAutomatonModelPackage.SET_TIMER_ACTION__TO_VALUE:
				return getToValue();
		}
		return super.eGet(featureID, resolve, coreType);
	}

	/**
	 * <!-- begin-user-doc -->
	 * <!-- end-user-doc -->
	 * @generated
	 */
	@Override
	public void eSet(int featureID, Object newValue) {
		switch (featureID) {
			case EventAutomatonModelPackage.SET_TIMER_ACTION__TO_VALUE:
				setToValue((Integer)newValue);
				return;
		}
		super.eSet(featureID, newValue);
	}

	/**
	 * <!-- begin-user-doc -->
	 * <!-- end-user-doc -->
	 * @generated
	 */
	@Override
	public void eUnset(int featureID) {
		switch (featureID) {
			case EventAutomatonModelPackage.SET_TIMER_ACTION__TO_VALUE:
				setToValue(TO_VALUE_EDEFAULT);
				return;
		}
		super.eUnset(featureID);
	}

	/**
	 * <!-- begin-user-doc -->
	 * <!-- end-user-doc -->
	 * @generated
	 */
	@Override
	public boolean eIsSet(int featureID) {
		switch (featureID) {
			case EventAutomatonModelPackage.SET_TIMER_ACTION__TO_VALUE:
				return toValue != TO_VALUE_EDEFAULT;
		}
		return super.eIsSet(featureID);
	}

	/**
	 * <!-- begin-user-doc -->
	 * <!-- end-user-doc -->
	 * @generated
	 */
	@Override
	public String toString() {
		if (eIsProxy()) return super.toString();

		StringBuffer result = new StringBuffer(super.toString());
		result.append(" (toValue: ");
		result.append(toValue);
		result.append(')');
		return result.toString();
	}

} //SetTimerActionImpl
